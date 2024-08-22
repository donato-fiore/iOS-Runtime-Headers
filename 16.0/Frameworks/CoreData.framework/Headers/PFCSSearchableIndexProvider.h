// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCSSEARCHABLEINDEXPROVIDER_H
#define PFCSSEARCHABLEINDEXPROVIDER_H


#import <Foundation/Foundation.h>


@interface PFCSSearchableIndexProvider : NSObject



-(id)createPrivateSearchableIndexWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)createPrivateSearchableIndexWithPath:(id)arg0 ;
-(id)createSearchableIndexWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)defaultPrivateSearchableIndex;
-(id)defaultSearchableIndex;


@end


#endif