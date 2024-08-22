// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRLTBRAILLEBUFFER_H
#define BRLTBRAILLEBUFFER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BRLTBrailleString.h"

@interface BRLTBrailleBuffer : NSObject <NSCopying>

 {
    BRLTBrailleString *_brailleString;
}


@property (readonly, nonatomic) BRLTBrailleString *brailleString;
@property (nonatomic) NSUInteger cursor; // ivar: _cursor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBrailleString:(id)arg0 ;
-(void)deleteBrailleChar;
-(void)insertBrailleChar:(id)arg0 ;


@end


#endif