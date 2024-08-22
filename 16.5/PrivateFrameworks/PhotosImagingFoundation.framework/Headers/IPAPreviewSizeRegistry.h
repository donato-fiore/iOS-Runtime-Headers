// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAPREVIEWSIZEREGISTRY_H
#define IPAPREVIEWSIZEREGISTRY_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}




-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)policyForStyle:(NSUInteger)arg0 ;
-(id)policyForStyleObject:(id)arg0 ;
-(void)addPolicy:(id)arg0 ;


@end


#endif