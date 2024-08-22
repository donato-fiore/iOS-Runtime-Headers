// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSDATADETECTORSSCANNERRESULTDATA_H
#define BCSDATADETECTORSSCANNERRESULTDATA_H

@class NSString, DDScannerResult;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSDataDetectorsScannerResultData : NSObject <BCSParsedDataPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText; // ivar: _extraPreviewText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DDScannerResult *scannerResult; // ivar: _scannerResult
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScannerResult:(id)arg0 type:(NSInteger)arg1 extraPreviewText:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif