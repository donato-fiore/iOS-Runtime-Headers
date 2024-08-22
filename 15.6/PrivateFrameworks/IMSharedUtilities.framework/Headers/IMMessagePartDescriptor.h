// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEPARTDESCRIPTOR_H
#define IMMESSAGEPARTDESCRIPTOR_H

@class NSArray, NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface IMMessagePartDescriptor : NSObject

@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly, nonatomic) NSArray *mapLocations; // ivar: _mapLocations
@property (readonly, copy, nonatomic) NSAttributedString *messagePartBody; // ivar: _messagePartBody
@property (readonly, nonatomic) NSUInteger messagePartIndex; // ivar: _messagePartIndex
@property (readonly, nonatomic) _NSRange messagePartRange; // ivar: _messagePartRange
@property (readonly, copy, nonatomic) NSString *transferGUID; // ivar: _transferGUID


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMessagePartBody:(id)arg0 messagePartIndex:(NSUInteger)arg1 messagePartRange:(struct _NSRange )arg2 transferGUID:(id)arg3 links:(id)arg4 mapLocations:(id)arg5 ;
-(id)messagePartGUIDForMessageGUID:(id)arg0 ;


@end


#endif