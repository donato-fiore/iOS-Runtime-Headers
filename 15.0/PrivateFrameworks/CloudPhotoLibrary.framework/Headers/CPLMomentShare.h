// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLMOMENTSHARE_H
#define CPLMOMENTSHARE_H

@class NSDate, NSString, NSArray, NSData, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger assetCount; // ivar: _assetCount
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) short mode; // ivar: _mode
@property (copy, nonatomic) NSString *originatingScopeIdentifier; // ivar: _originatingScopeIdentifier
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (nonatomic) NSInteger photosCount; // ivar: _photosCount
@property (copy, nonatomic) NSData *previewData; // ivar: _previewData
@property (copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger videosCount; // ivar: _videosCount


+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScopeChange:(id)arg0 ;
-(id)translateToScopeChangeWithScopeType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateScopeChange:(id)arg0 ;


@end


#endif