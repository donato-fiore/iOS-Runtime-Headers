// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDATADETECTORQUERYITEM_H
#define CHDATADETECTORQUERYITEM_H

@class DDScannerResult, NSSet;

#import <Foundation/Foundation.h>


@interface CHDataDetectorQueryItem : NSObject

@property (readonly, nonatomic) DDScannerResult *dataDetectorResult; // ivar: _dataDetectorResult
@property (readonly, nonatomic) *CGPath estimatedBaseline; // ivar: _estimatedBaseline
@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers; // ivar: _strokeIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDataDetectorQueryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStrokeIdentifiers:(id)arg0 detectedResult:(id)arg1 estimatedBaseline:(struct CGPath *)arg2 ;
-(void)dealloc;


@end


#endif