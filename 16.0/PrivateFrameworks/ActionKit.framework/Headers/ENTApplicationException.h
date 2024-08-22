// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTAPPLICATIONEXCEPTION_H
#define ENTAPPLICATIONEXCEPTION_H



#import "ENTException.h"

@interface ENTApplicationException : ENTException {
    int _type;
}




+(id)exceptionWithType:(int)arg0 reason:(id)arg1 ;
+(id)read:(id)arg0 ;
-(id)initWithType:(int)arg0 reason:(id)arg1 ;
-(void)write:(id)arg0 ;


@end


#endif