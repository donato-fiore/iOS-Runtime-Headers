// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGAJSDOCUMENT_H
#define CCVEGAJSDOCUMENT_H

@protocol CCVegaJSDocumentInterface;

#import <Foundation/Foundation.h>

#import "CCVegaHTMLElement.h"
#import "CCVegaRenderer.h"

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface>



@property (retain, nonatomic) CCVegaHTMLElement *body; // ivar: body
@property (weak, nonatomic) CCVegaRenderer *renderer; // ivar: renderer


-(id)createElementWithString:(id)arg0 ;
-(id)init;


@end


#endif