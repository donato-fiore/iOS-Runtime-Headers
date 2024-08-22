// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGCONFIGURATION_H
#define WBSPHISHINGCONFIGURATION_H

@class NSArray, NSDictionary, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface WBSPhishingConfiguration : NSObject <WBSRemotePlistSnapshot>

 {
    NSArray *_overrides;
    NSDictionary *_domains;
    NSDictionary *_imageClassifierIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property (readonly, nonatomic) CGSize imageInputSize; // ivar: _imageInputSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(BOOL)_parseDomains:(id)arg0 error:(*id)arg1 ;
-(BOOL)_parseImageClassifierIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)_parseOverrides:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)classifyURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)classifyURL:(id)arg0 imageClassifierIdentifier:(id)arg1 imageClassifierConfidence:(float)arg2 error:(*id)arg3 ;
-(id)_sanitizeURL:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;


@end


#endif