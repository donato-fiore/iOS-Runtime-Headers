// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKNSARRAY_H
#define WKNSARRAY_H

@class NSArray, NSString;
@protocol WKObject;



@interface WKNSArray : NSArray <WKObject>

 {
    ObjectStorage<API::Array> _array;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif