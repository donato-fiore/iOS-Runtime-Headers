// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHOWACTIVITYREQUEST_H
#define STSHOWACTIVITYREQUEST_H

@class AFSiriRequest;



@interface STShowActivityRequest : AFSiriRequest {
    NSInteger _dataType;
    NSInteger _view;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)dataType;
-(NSInteger)view;
-(id)_initWithDataType:(NSInteger)arg0 view:(NSInteger)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif