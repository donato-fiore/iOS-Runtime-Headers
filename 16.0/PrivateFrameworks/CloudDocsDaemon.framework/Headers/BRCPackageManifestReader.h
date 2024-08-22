// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPACKAGEMANIFESTREADER_H
#define BRCPACKAGEMANIFESTREADER_H

@class NSEnumerator, NSInputStream, PBMessageStreamReader, NSError;



@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}


@property (nonatomic) Class itemClass;


-(id)error;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithDeviceID:(int)arg0 fileID:(NSUInteger)arg1 ;
-(id)initWithInputStream:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;
-(void)done;


@end


#endif