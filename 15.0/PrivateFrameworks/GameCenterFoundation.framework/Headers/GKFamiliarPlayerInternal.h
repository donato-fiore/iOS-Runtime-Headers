// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKFAMILIARPLAYERINTERNAL_H
#define GKFAMILIARPLAYERINTERNAL_H

@class NSString;


#import "GKPlayerInternal.h"

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}




+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)compositeName;
-(id)firstName;
-(id)lastName;
-(void)setCompositeName:(id)arg0 ;
-(void)setFirstName:(id)arg0 ;
-(void)setLastName:(id)arg0 ;


@end


#endif