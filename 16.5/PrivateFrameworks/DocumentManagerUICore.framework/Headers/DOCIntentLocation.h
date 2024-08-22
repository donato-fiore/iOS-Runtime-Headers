// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCINTENTLOCATION_H
#define DOCINTENTLOCATION_H

@class INObject, NSString;



@interface DOCIntentLocation : INObject

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *locationIdentifier;
@property (copy, nonatomic) NSString *locationType;


+(id)imageForType:(id)arg0 ;
+(id)intentLocationWithIdentifier:(id)arg0 displayString:(id)arg1 type:(id)arg2 ;
+(id)intentLocationWithItem:(id)arg0 ;
+(id)intentLocationWithTag:(id)arg0 ;


@end


#endif