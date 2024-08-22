// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIRUNTIMECONNECTION_H
#define UIRUNTIMECONNECTION_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface UIRuntimeConnection : NSObject <NSCoding>



@property (retain, nonatomic) id *destination; // ivar: _destination
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) id *source; // ivar: _source


-(id)initWithCoder:(id)arg0 ;
-(void)connect;
-(void)connectForSimulator;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif