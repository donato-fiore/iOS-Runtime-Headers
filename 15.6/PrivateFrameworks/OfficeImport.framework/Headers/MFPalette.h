// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPALETTE_H
#define MFPALETTE_H

@class NSMutableArray;
@protocol MFObject;

#import <Foundation/Foundation.h>


@interface MFPalette : NSObject <MFObject>

 {
    NSMutableArray *m_colours;
}




+(id)paletteWithColours:(id)arg0 ;
-(BOOL)resize:(int)arg0 ;
-(BOOL)setEntries:(int)arg0 in_colours:(id)arg1 ;
-(id)getColour:(int)arg0 ;
-(id)init;
-(id)initWithColours:(id)arg0 ;
-(int)selectInto:(id)arg0 ;


@end


#endif