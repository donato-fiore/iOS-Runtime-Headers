// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTMESSAGEPART_H
#define CTMESSAGEPART_H

@class NSMutableDictionary, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CTMessagePart : NSObject {
    NSMutableDictionary *_contentTypeParams;
}


@property (copy, nonatomic) NSString *contentId; // ivar: _contentId
@property (copy, nonatomic) NSString *contentLocation; // ivar: _contentLocation
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSData *data; // ivar: _data


-(id)allContentTypeParameterNames;
-(id)contentTypeParameterWithName:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg0 value:(id)arg1 ;


@end


#endif