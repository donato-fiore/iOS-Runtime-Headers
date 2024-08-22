// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLTOKENIDCONVERTER_H
#define NLTOKENIDCONVERTER_H


#import <Foundation/Foundation.h>


@interface NLTokenIDConverter : NSObject



-(id)stringForTokenID:(unsigned int)arg0 ;
-(id)stringForTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(unsigned int)tokenIDForString:(id)arg0 ;
-(void)enumerateTokenIDsForString:(id)arg0 range:(struct _NSRange )arg1 withBlock:(id)arg2 ;


@end


#endif