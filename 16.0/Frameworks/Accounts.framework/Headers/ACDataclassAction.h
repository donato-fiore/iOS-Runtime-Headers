// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDATACLASSACTION_H
#define ACDATACLASSACTION_H

@class NSArray, NSString;
@protocol ACProtobufCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding>



@property (readonly, getter=_isError) BOOL _error;
@property (readonly, nonatomic) NSArray *affectedContainers; // ivar: _affectedContainers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDestructive; // ivar: _isDestructive
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *undoAlertMessage; // ivar: _undoAlertMessage
@property (retain, nonatomic) NSString *undoAlertTitle; // ivar: _undoAlertTitle


+(BOOL)supportsSecureCoding;
+(id)_actionForError:(id)arg0 ;
+(id)actionWithType:(NSInteger)arg0 ;
+(id)destructiveActionWithType:(NSInteger)arg0 ;
+(id)destructiveActionWithType:(NSInteger)arg0 affectedContainers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_encodeProtobuf;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg0 ;
-(id)_initWithProtobufData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 destructivity:(BOOL)arg1 affectedContainers:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif