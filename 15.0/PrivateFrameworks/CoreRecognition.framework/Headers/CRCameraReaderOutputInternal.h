// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCAMERAREADEROUTPUTINTERNAL_H
#define CRCAMERAREADEROUTPUTINTERNAL_H

@class NSAttributedString, NSString, NSNumber, UIImage, NSArray;

#import <Foundation/Foundation.h>


@interface CRCameraReaderOutputInternal : NSObject {
    NSAttributedString *overlayString;
    CGRect boundingBox;
    float rotation;
}


@property CGRect boundingBox; // ivar: _boundingBox
@property (retain) NSString *capturePath; // ivar: _capturePath
@property (retain) NSNumber *dayValue; // ivar: _dayValue
@property (retain) NSString *formattedStringValue; // ivar: _formattedStringValue
@property (retain) UIImage *imageValue; // ivar: _imageValue
@property (retain) NSNumber *monthValue; // ivar: _monthValue
@property (retain) NSAttributedString *overlayString; // ivar: _overlayString
@property float rotation; // ivar: _rotation
@property (retain) NSString *stringValue; // ivar: _stringValue
@property (retain) NSArray *targetVertices; // ivar: _targetVertices
@property (retain) NSString *type; // ivar: _type
@property (retain) NSArray *vertices; // ivar: _vertices
@property (retain) NSNumber *yearValue; // ivar: _yearValue




@end


#endif