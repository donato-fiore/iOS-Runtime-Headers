// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBCORESHAREDBUFFERDATA_H
#define WEBCORESHAREDBUFFERDATA_H

@class NSData;



@interface WebCoreSharedBufferData : NSData {
    RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::RawPtrTraits<const WebCore::SharedBuffer::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::SharedBuffer::DataSegment>> _dataSegment;
    NSUInteger _position;
}




+(void)initialize;
-(*void)bytes;
-(NSUInteger)length;
-(id)initWithDataSegment:(*void)arg0 position:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif