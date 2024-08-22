// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAMUGSHOTMARQUEECHOICEVIEWDECORATOR_H
#define FAMUGSHOTMARQUEECHOICEVIEWDECORATOR_H

@class RUIElement;

#import <Foundation/Foundation.h>

#import "FAProfilePictureStore.h"

@interface FAMugshotMarqueeChoiceViewDecorator : NSObject

@property (retain, nonatomic) RUIElement *element; // ivar: _element
@property (retain, nonatomic) FAProfilePictureStore *pictureStore; // ivar: _pictureStore


+(BOOL)shouldProcessElement:(id)arg0 ;
+(BOOL)shouldProcessObjectModel:(id)arg0 ;
-(id)altDSIDsFromString:(id)arg0 ;
-(id)imageWithAltDSIDs:(id)arg0 familyCircle:(id)arg1 ;
-(id)initWithElement:(id)arg0 pictureStore:(id)arg1 ;
-(id)initWithObjectModel:(id)arg0 pictureStore:(id)arg1 ;
-(void)applyImage;


@end


#endif