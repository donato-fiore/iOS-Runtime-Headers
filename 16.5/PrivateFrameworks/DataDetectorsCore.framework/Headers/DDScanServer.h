// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSCANSERVER_H
#define DDSCANSERVER_H



#import "DDScannerService.h"

@interface DDScanServer : DDScannerService

@property (nonatomic) NSInteger options; // ivar: _options
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)init;
-(id)scanString:(id)arg0 ;
-(void)scanString:(id)arg0 resultsBlock:(id)arg1 ;


@end


#endif