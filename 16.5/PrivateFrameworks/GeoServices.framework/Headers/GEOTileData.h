// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILEDATA_H
#define GEOTILEDATA_H

@class NSData, NSString, NSURL;
@protocol GEOXPCSerializable;

#import <Foundation/Foundation.h>


@interface GEOTileData : NSObject <GEOXPCSerializable>

 {
    NSUInteger _cachedFileSize;
    NSInteger _sandboxExtension;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *decodedRepresentation; // ivar: _decodedRepresentation
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDecodedRepresentation:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(id)readDataWithError:(*id)arg0 ;
-(void)_replaceFileURL:(id)arg0 ;
-(void)dealloc;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif