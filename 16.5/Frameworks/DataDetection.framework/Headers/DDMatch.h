// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDMATCH_H
#define DDMATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DDMatch : NSObject

@property (readonly, nonatomic) _NSRange matchedRange; // ivar: _matchedRange
@property (readonly, nonatomic) NSString *matchedString; // ivar: _matchedString


+(id)resultWithDDScannerResult:(id)arg0 ;
+(id)resultWithDDScannerResult:(id)arg0 originalString:(id)arg1 ;
-(id)initWithDDScannerResult:(id)arg0 ;
-(id)initWithDDScannerResult:(id)arg0 originalString:(id)arg1 ;
-(void)commonInitWithDDScannerResult:(id)arg0 originalString:(id)arg1 ;


@end


#endif