// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNREPUTATIONCORERECENTSADAPTER_H
#define CNREPUTATIONCORERECENTSADAPTER_H

@class CRRecentContactsLibrary;

#import <Foundation/Foundation.h>


@interface CNReputationCoreRecentsAdapter : NSObject

@property (readonly, nonatomic) CRRecentContactsLibrary *library; // ivar: _library


-(id)init;
-(id)initWithRecentContactsLibrary:(id)arg0 ;
-(id)recentContactsForHandle:(id)arg0 ;


@end


#endif