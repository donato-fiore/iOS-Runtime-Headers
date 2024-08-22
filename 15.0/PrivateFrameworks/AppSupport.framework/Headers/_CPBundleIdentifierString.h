// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPBUNDLEIDENTIFIERSTRING_H
#define _CPBUNDLEIDENTIFIERSTRING_H

@class NSString;



@interface _CPBundleIdentifierString : NSString {
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}




-(BOOL)_isProcessName;
-(NSUInteger)length;
-(id)_initWithExecutablePath:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)_loadBundleIdentifierOrProcessName;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif