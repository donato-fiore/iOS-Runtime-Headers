// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALVIRTUALCONFERENCE_H
#define CALVIRTUALCONFERENCE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CalVirtualConference : NSObject

@property (readonly, nonatomic) NSString *conferenceDetails; // ivar: _conferenceDetails
@property (readonly, nonatomic) BOOL isWritable; // ivar: _isWritable
@property (readonly, nonatomic) NSArray *joinMethods; // ivar: _joinMethods
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 joinMethods:(id)arg1 conferenceDetails:(id)arg2 source:(NSUInteger)arg3 isWritable:(BOOL)arg4 ;


@end


#endif