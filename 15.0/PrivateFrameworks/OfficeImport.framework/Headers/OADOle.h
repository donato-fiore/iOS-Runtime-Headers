// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADOLE_H
#define OADOLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OADOle : NSObject {
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id *mObject;
}




+(BOOL)isCLSIDSupported:(id)arg0 ;
+(BOOL)isProgIDChart:(id)arg0 ;
+(BOOL)isProgIDMathType:(id)arg0 ;
-(BOOL)iconic;
-(id)CLSID;
-(id)ansiClipboardFormatName;
-(id)ansiProgID;
-(id)ansiUserType;
-(id)description;
-(id)init;
-(id)macClipboardFormat;
-(id)object;
-(id)unicodeClipboardFormatName;
-(id)unicodeProgID;
-(id)unicodeUserType;
-(unsigned int)winClipboardFormat;
-(void)setAnsiClipboardFormatName:(id)arg0 ;
-(void)setAnsiProgID:(id)arg0 ;
-(void)setAnsiUserType:(id)arg0 ;
-(void)setCLSID:(id)arg0 ;
-(void)setIconic:(BOOL)arg0 ;
-(void)setMacClipboardFormat:(id)arg0 ;
-(void)setObject:(id)arg0 ;
-(void)setUnicodeClipboardFormatName:(id)arg0 ;
-(void)setUnicodeProgID:(id)arg0 ;
-(void)setUnicodeUserType:(id)arg0 ;
-(void)setWinClipboardFormat:(unsigned int)arg0 ;


@end


#endif