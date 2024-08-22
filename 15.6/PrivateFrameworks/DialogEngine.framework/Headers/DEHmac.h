// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEHMAC_H
#define DEHMAC_H

@class NSData;
@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEHmac : NSObject <DEWriter>



@property (nonatomic) ? context; // ivar: _context
@property (retain, nonatomic) NSData *hmac; // ivar: _hmac


+(BOOL)verify:(id)arg0 computed:(id)arg1 ;
-(id)initWithKey:(id)arg0 iv:(id)arg1 ;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif