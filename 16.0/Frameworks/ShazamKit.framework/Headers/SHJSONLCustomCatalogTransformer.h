// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHJSONLCUSTOMCATALOGTRANSFORMER_H
#define SHJSONLCUSTOMCATALOGTRANSFORMER_H

@class NSString, NSError, NSDictionary;
@protocol SHJSONLDataDetokenizerDelegate, SHJSONLCustomCatalogTransformerDelegate;

#import <Foundation/Foundation.h>


@interface SHJSONLCustomCatalogTransformer : NSObject <SHJSONLDataDetokenizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHJSONLCustomCatalogTransformerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *header; // ivar: _header
@property (readonly) Class superclass;


+(BOOL)objectIsHeader:(id)arg0 ;
+(BOOL)objectIsMediaItem:(id)arg0 ;
+(BOOL)objectIsSignature:(id)arg0 ;
+(id)IDFromFileRow:(id)arg0 ;
+(id)catalogFileRepresentationOfMediaItems:(id)arg0 withID:(id)arg1 error:(*id)arg2 ;
+(id)catalogFileRepresentationOfSignature:(id)arg0 withID:(id)arg1 ;
+(id)headerFromFileRow:(id)arg0 ;
+(id)mediaItemFromFileRow:(id)arg0 error:(*id)arg1 ;
+(id)outputFileHeader;
+(id)signatureFromFileRow:(id)arg0 error:(*id)arg1 ;
-(BOOL)parsedJSONObject:(id)arg0 error:(*id)arg1 ;
-(void)reset;


@end


#endif