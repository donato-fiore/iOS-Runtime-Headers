// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHRECOGNITIONSESSIONVERSION_H
#define CHRECOGNITIONSESSIONVERSION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger sessionResultVersion; // ivar: _sessionResultVersion
@property (readonly, nonatomic) NSInteger sessionVersion; // ivar: _sessionVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isValidSessionResultVersion;
-(BOOL)isValidSessionVersion;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionVersion:(NSInteger)arg0 sessionResultVersion:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif