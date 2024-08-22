// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUEMBEDDATA_H
#define NUEMBEDDATA_H

@class SXJSONObject, NSURL, NSString;
@protocol SXEmbedType;



@interface NUEmbedData : SXJSONObject <SXEmbedType>



@property (readonly, nonatomic) NSUInteger autoPlayMedia;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *bodyHTML;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *enclosingHTML;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *javaScript;
@property (readonly, nonatomic) CGFloat maximumWidth;
@property (readonly, nonatomic) CGFloat minimumWidth;
@property (readonly) Class superclass;


-(NSUInteger)autoPlayMediaWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif