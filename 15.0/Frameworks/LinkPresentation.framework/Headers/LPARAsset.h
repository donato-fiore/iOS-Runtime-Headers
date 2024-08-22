// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPARASSET_H
#define LPARASSET_H

@class NSData, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LPARAssetProperties.h"

@interface LPARAsset : NSObject <NSSecureCoding>

 {
    NSData *_data;
    NSURL *_temporaryFileURL;
    LPARAssetProperties *_properties;
}


@property (readonly, copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, copy, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) LPARAssetProperties *properties;


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedSize;
-(id)_createTemporaryFileAndWriteData;
-(id)_ensureTemporaryAssetURL;
-(id)_initWithARAsset:(id)arg0 ;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(void)_mapDataFromFileURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif