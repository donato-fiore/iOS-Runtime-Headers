// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMEDIARENDERED_H
#define BMMEDIARENDERED_H

@class NSString, NSArray;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMMediaRendered : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAbsoluteTimestamp; // ivar: _hasAbsoluteTimestamp
@property (nonatomic) BOOL hasIsFirstView; // ivar: _hasIsFirstView
@property (nonatomic) BOOL hasIsOnScreen; // ivar: _hasIsOnScreen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFirstView; // ivar: _isFirstView
@property (readonly, nonatomic) BOOL isOnScreen; // ivar: _isOnScreen
@property (readonly, nonatomic) NSArray *mediaAttributes; // ivar: _mediaAttributes
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 mediaAttributes:(id)arg1 isOnScreen:(BOOL)arg2 isFirstView:(BOOL)arg3 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif