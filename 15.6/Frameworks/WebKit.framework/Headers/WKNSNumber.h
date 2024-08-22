// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKNSNUMBER_H
#define WKNSNUMBER_H

@class NSNumber, NSString;
@protocol WKObject;



@interface WKNSNumber : NSNumber <WKObject>

 {
    int _type;
    ? _number;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)doubleValue;
-(NSInteger)longLongValue;
-(NSUInteger)unsignedLongLongValue;
-(char *)objCType;
-(char)charValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)getValue:(*void)arg0 ;


@end


#endif