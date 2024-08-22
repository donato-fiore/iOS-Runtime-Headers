// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVERSIONWRITER_H
#define DEVERSIONWRITER_H

@class NSData;
@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEVersionWriter : NSObject <DEWriter>



@property (nonatomic) CC_SHA256state_st context; // ivar: _context
@property (retain, nonatomic) NSData *version; // ivar: _version


+(BOOL)prepareDirsFor:(id)arg0 ;
+(id)dataWithHexString:(id)arg0 ;
+(id)getURLFor:(id)arg0 version:(id)arg1 base:(id)arg2 ;
+(id)versionData:(id)arg0 ;
+(id)versionFile:(id)arg0 ;
+(id)versionString:(id)arg0 ;
+(id)versionToString:(id)arg0 ;
-(id)init;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif