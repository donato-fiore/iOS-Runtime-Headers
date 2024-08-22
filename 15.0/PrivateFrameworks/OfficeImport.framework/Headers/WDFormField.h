// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDFORMFIELD_H
#define WDFORMFIELD_H

@class NSString;


#import "WDRun.h"

@interface WDFormField : WDRun {
    unsigned int mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}




-(BOOL)linkAbsolute;
-(BOOL)linkSpecifyingNamedLocation;
-(id)URI;
-(id)description;
-(id)dosName;
-(id)initWithParagraph:(id)arg0 ;
-(id)macName;
-(id)namedLocation;
-(int)runType;
-(unsigned int)position;
-(void)setDosName:(id)arg0 ;
-(void)setLinkAbsolute:(BOOL)arg0 ;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg0 ;
-(void)setMacName:(id)arg0 ;
-(void)setNamedLocation:(id)arg0 ;
-(void)setPosition:(unsigned int)arg0 ;
-(void)setURI:(id)arg0 ;


@end


#endif