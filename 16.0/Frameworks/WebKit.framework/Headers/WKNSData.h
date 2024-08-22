// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKNSDATA_H
#define WKNSDATA_H

@class NSData, NSString;
@protocol WKObject;



@interface WKNSData : NSData <WKObject>

 {
    ObjectStorage<API::Data> _data;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)bytes;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif