// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKCALLPARTICIPANTLABELDESCRIPTOR_H
#define CNKCALLPARTICIPANTLABELDESCRIPTOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNKCallParticipantLabelDescriptor : NSObject {
    ? strings;
    ? secondaryString;
    ? localizedSenderIdentity;
}


@property (nonatomic) BOOL isDynamic; // ivar: isDynamic
@property (nonatomic) NSInteger layoutState; // ivar: layoutState
@property (nonatomic, copy) NSString *localizedSenderIdentity;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic, copy) NSArray *strings;


+(id)labelDescriptorWithStringsForCall:(id)arg0 callCount:(NSInteger)arg1 alertAvailable:(BOOL)arg2 allowsDuration:(BOOL)arg3 ;
+(id)labelDescriptorWithStringsForCall:(id)arg0 callCount:(NSInteger)arg1 callCenter:(id)arg2 alertAvailable:(BOOL)arg3 allowsDuration:(BOOL)arg4 ;
+(id)organizationNameProvider:(SEL)arg0 ;
+(void)setOrganizationNameProvider:(id)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif