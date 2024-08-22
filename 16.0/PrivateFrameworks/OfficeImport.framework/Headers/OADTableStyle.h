// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLESTYLE_H
#define OADTABLESTYLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OADTableBackground.h"
#import "OADTablePartStyle.h"

@interface OADTableStyle : NSObject {
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}




-(id)background;
-(id)band1HorzStyle;
-(id)band1VertStyle;
-(id)band2HorzStyle;
-(id)band2VertStyle;
-(id)description;
-(id)firstColumnStyle;
-(id)firstRowStyle;
-(id)id;
-(id)lastColumnStyle;
-(id)lastRowStyle;
-(id)name;
-(id)northEastStyle;
-(id)northWestStyle;
-(id)partStyle:(int)arg0 ;
-(id)southEastStyle;
-(id)southWestStyle;
-(id)wholeTableStyle;
-(void)setBackground:(id)arg0 ;
-(void)setBand1HorzStyle:(id)arg0 ;
-(void)setBand1VertStyle:(id)arg0 ;
-(void)setBand2HorzStyle:(id)arg0 ;
-(void)setBand2VertStyle:(id)arg0 ;
-(void)setFirstColumnStyle:(id)arg0 ;
-(void)setFirstRowStyle:(id)arg0 ;
-(void)setId:(id)arg0 ;
-(void)setLastColumnStyle:(id)arg0 ;
-(void)setLastRowStyle:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setNorthEastStyle:(id)arg0 ;
-(void)setNorthWestStyle:(id)arg0 ;
-(void)setSouthEastStyle:(id)arg0 ;
-(void)setSouthWestStyle:(id)arg0 ;
-(void)setStyle:(id)arg0 forPart:(int)arg1 ;
-(void)setWholeTableStyle:(id)arg0 ;


@end


#endif