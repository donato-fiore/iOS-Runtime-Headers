// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI17MOCKPINCONTROLLER_H
#define _TTC19CONTACTLESSREADERUI17MOCKPINCONTROLLER_H

@class SPRPINController;



@interface _TtC19ContactlessReaderUI17MockPINController : SPRPINController



-(BOOL)addDigitWithValue:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)capturePINWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeLastDigitAndReturnError:(*id)arg0 ;
-(BOOL)updateParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyWithPINToken:(id)arg0 error:(*id)arg1 ;
-(id)generatePINBlockAndReturnError:(*id)arg0 ;
-(id)init;
-(void)cancelPINCapture;


@end


#endif