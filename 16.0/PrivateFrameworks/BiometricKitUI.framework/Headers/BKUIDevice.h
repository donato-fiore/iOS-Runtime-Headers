// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIDEVICE_H
#define BKUIDEVICE_H


#import <Foundation/Foundation.h>


@interface BKUIDevice : NSObject

@property (nonatomic) BOOL isPad; // ivar: _isPad
@property (nonatomic) int mainScreenClass; // ivar: _mainScreenClass


+(id)sharedInstance;
-(BOOL)isD10;
-(BOOL)isD32Sized;
-(BOOL)isD33;
-(BOOL)isIPad2;
-(BOOL)isIdiomPad;
-(BOOL)isMini;
-(BOOL)isN69;
-(BOOL)isN84;
-(BOOL)isZoomEnabled;
-(BOOL)isiPad21;
-(id)init;


@end


#endif