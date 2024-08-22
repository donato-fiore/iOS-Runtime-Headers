// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICTEMPLATELAYOUT_H
#define PKDYNAMICTEMPLATELAYOUT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PKDynamicTemplateLayout : NSObject {
    NSMutableDictionary *_layoutStrings;
    NSMutableDictionary *_layoutImages;
    NSMutableDictionary *_layoutLinks;
}


@property (readonly, nonatomic) NSString *templateIdentifier; // ivar: _templateIdentifier


-(id)anyLayoutImageNamed:(id)arg0 ;
-(id)anyLayoutLinkNamed:(id)arg0 ;
-(id)anyLayoutStringNamed:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)layoutImageNamed:(id)arg0 passingTest:(id)arg1 ;
-(id)layoutImages;
-(id)layoutLinkNamed:(id)arg0 passingTest:(id)arg1 ;
-(id)layoutLinks;
-(id)layoutStringNamed:(id)arg0 passingTest:(id)arg1 ;
-(id)layoutStrings;
-(void)_initWithLayoutDictionary:(id)arg0 ;


@end


#endif