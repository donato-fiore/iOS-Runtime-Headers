// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FATEXCEPTION_H
#define FATEXCEPTION_H

@class NSException;
@protocol NSCoding, NSCopying;



@interface FATException : NSException <NSCoding, NSCopying>





+(id)structFields;
+(id)structName;
+(void)initialize;
-(id)init;
-(void)read:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif