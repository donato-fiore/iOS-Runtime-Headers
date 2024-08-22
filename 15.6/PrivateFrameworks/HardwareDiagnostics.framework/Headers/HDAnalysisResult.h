// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDANALYSISRESULT_H
#define HDANALYSISRESULT_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDAnalysisResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *auxiliaryData; // ivar: _auxiliaryData
@property (readonly, nonatomic) NSMutableDictionary *files; // ivar: _files
@property (readonly, nonatomic) NSMutableArray *measuredResults; // ivar: _measuredResults


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAnalysisResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif