// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMULTIPARTINPUTSTREAM_H
#define PKMULTIPARTINPUTSTREAM_H

@class NSInputStream, NSString, NSData, NSMutableArray;
@protocol NSStreamDelegate;



@interface PKMultipartInputStream : NSInputStream {
    id<NSStreamDelegate> *delegate;
}


@property (retain, nonatomic) NSString *boundary; // ivar: _boundary
@property (nonatomic) NSUInteger currentPart; // ivar: _currentPart
@property (nonatomic) NSUInteger delivered; // ivar: _delivered
@property (retain, nonatomic) NSData *footer; // ivar: _footer
@property (nonatomic) NSUInteger length; // ivar: _length
@property (retain, nonatomic) NSMutableArray *parts; // ivar: _parts
@property (nonatomic) NSUInteger status; // ivar: _status


-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)init;
-(id)propertyForKey:(id)arg0 ;
-(void)_scheduleInCFRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)_setCFClientFlags:(NSUInteger)arg0 callback:(*unk)arg1 context:(struct ? )arg2 ;
-(void)addPartWithHeaders:(id)arg0 path:(id)arg1 ;
-(void)addPartWithHeaders:(id)arg0 string:(id)arg1 ;
-(void)addPartWithName:(id)arg0 data:(id)arg1 ;
-(void)addPartWithName:(id)arg0 data:(id)arg1 contentType:(id)arg2 ;
-(void)addPartWithName:(id)arg0 filename:(id)arg1 data:(id)arg2 contentType:(id)arg3 ;
-(void)addPartWithName:(id)arg0 filename:(id)arg1 path:(id)arg2 ;
-(void)addPartWithName:(id)arg0 filename:(id)arg1 path:(id)arg2 contentType:(id)arg3 ;
-(void)addPartWithName:(id)arg0 filename:(id)arg1 stream:(id)arg2 streamLength:(NSUInteger)arg3 ;
-(void)addPartWithName:(id)arg0 path:(id)arg1 ;
-(void)addPartWithName:(id)arg0 string:(id)arg1 ;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)updateLength;


@end


#endif