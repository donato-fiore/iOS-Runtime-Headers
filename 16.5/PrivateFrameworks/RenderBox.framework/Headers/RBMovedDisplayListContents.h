// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBMOVEDDISPLAYLISTCONTENTS_H
#define RBMOVEDDISPLAYLISTCONTENTS_H

@class NSString;
@protocol RBDisplayListContents;

#import <Foundation/Foundation.h>


@interface RBMovedDisplayListContents : NSObject <RBDisplayListContents>

 {
    unique_ptr<RB::DisplayList::Contents, RB::Destroy<RB::DisplayList::Contents>> _contents;
    unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> _xml_document;
}


@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *xmlDescription;


+(id)decodedObjectWithData:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(*void)_rbContents;
-(*void)_rbPredicate;
-(*void)_rbXmlDocument;
-(id)encodedDataForDelegate:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)drawInState:(struct _RBDrawingState *)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 options:(id)arg1 ;


@end


#endif