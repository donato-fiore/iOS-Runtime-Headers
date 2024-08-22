// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASENQUEUEDCOMMAND_H
#define MSASENQUEUEDCOMMAND_H

@class NSString, NSDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface MSASEnqueuedCommand : NSObject <NSCoding>



@property (copy, nonatomic) NSString *command; // ivar: _command
@property (retain, nonatomic) NSDictionary *invariantParam; // ivar: _invariantParam
@property (retain, nonatomic) NSDictionary *variantParam; // ivar: _variantParam


+(id)commandwithCommand:(id)arg0 variantParam:(id)arg1 invariantParam:(id)arg2 ;
-(BOOL)canBeGroupedWithCommand:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 variantParam:(id)arg1 invariantParam:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif