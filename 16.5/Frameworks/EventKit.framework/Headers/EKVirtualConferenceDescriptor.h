// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKVIRTUALCONFERENCEDESCRIPTOR_H
#define EKVIRTUALCONFERENCEDESCRIPTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface EKVirtualConferenceDescriptor : NSObject

@property (readonly, copy, nonatomic) NSArray *URLDescriptors; // ivar: _URLDescriptors
@property (readonly, copy, nonatomic) NSString *conferenceDetails; // ivar: _conferenceDetails
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 URLDescriptors:(id)arg1 conferenceDetails:(id)arg2 ;


@end


#endif