// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PLLAZYPREHEATDATA_H
#define _PLLAZYPREHEATDATA_H

@class NSData, NSString;



@interface _PLLazyPreheatData : NSData {
    NSString *_path;
    NSData *_data;
}




+(id)dataWithContentsOfFile:(id)arg0 ;
-(*void)bytes;
-(NSUInteger)length;
-(id)initWithContentsOfFile:(id)arg0 ;
-(void)_loadData;


@end


#endif