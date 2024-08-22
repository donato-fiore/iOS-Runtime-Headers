// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOPRIMARYUSER_H
#define HMACCESSORYINFOPRIMARYUSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly) NSUInteger selectionType; // ivar: _selectionType
@property (readonly, copy) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithUUIDString:(id)arg0 selectionType:(NSUInteger)arg1 ;
-(id)protoData;
-(id)protoPayload;
-(int)_primaryUserInfoEventSelectionType:(NSUInteger)arg0 ;


@end


#endif