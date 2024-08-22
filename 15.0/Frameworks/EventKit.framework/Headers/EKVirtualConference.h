// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKVIRTUALCONFERENCE_H
#define EKVIRTUALCONFERENCE_H

@class NSString, NSURL, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKVirtualConference : NSObject <NSCopying>



@property (retain, nonatomic) NSString *conferenceDetails; // ivar: _conferenceDetails
@property (readonly, nonatomic) NSURL *firstPhoneNumber;
@property (readonly, nonatomic) BOOL isWritable;
@property (retain, nonatomic) NSArray *joinMethods; // ivar: _joinMethods
@property (retain, nonatomic) NSString *serializationBlockTitle; // ivar: _serializationBlockTitle
@property (nonatomic) NSUInteger source; // ivar: _source
@property (retain, nonatomic) NSString *title; // ivar: _title


// +(void)virtualConferenceForRoomType:(id)arg0 completion:(id)arg1 queue:(unk)arg2  ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 joinMethods:(id)arg1 conferenceDetails:(id)arg2 ;


@end


#endif