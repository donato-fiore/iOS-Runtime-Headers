// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPHOTOANALYSISCACHEENTRY_H
#define NTKPHOTOANALYSISCACHEENTRY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NTKPhotoAnalysis.h"

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding>



@property (retain, nonatomic) NTKPhotoAnalysis *analysis; // ivar: _analysis
@property (nonatomic) int sequenceNumber; // ivar: _sequenceNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif